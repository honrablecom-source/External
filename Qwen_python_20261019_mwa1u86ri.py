import requests
BASE = "http://127.0.0.1:5000" # Placeholder for your actual ngrok URL
AUTH = {"X-Auth": "your_auth_key"}

# Writing config.h
config_code = open('config.h', 'r').read()
requests.post(f"{BASE}/write", params={"path": "projects/roblox_ext/config.h"}, headers=AUTH, data=config_code.encode())

# Writing main.cpp
main_code = open('main.cpp', 'r').read()
requests.post(f"{BASE}/write", params={"path": "projects/roblox_ext/main.cpp"}, headers=AUTH, data=main_code.encode())

# Verifying
r = requests.get(f"{BASE}/list", params={"path": "projects/roblox_ext"}, headers=AUTH)
print(r.json())
