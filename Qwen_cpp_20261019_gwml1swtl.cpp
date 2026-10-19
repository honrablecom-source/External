// File: config.h
#pragma once
#include <string>

// Aimbot Configuration
struct AimbotConfig {
    bool enabled = false;
    bool silentAim = false;       // Curves shots to target
    int hitChance = 100;          // 0-100
    float smoothing = 5.0f;       // Lower = snappier, Higher = more human
    int aimType = 0;              // 0 = Linear, 1 = Human-like
    bool snapInstantly = false;   // Overrides smoothing if true
    std::string targetPart = "Head"; // Head, HumanoidRootPart, etc.
    
    // FOV Settings
    float fovSize = 150.0f;       // Radius in pixels
    bool fovFill = false;         // Fills the FOV circle
    int fovStyle = 0;             // 0 = Outline, 1 = Filled
    bool prediction = false;      // Predicts target movement
};

// ESP Configuration
struct ESPConfig {
    bool enabled = true;
    bool teamCheck = true;
    float maxDistance = 5000.0f;
    
    // Box & Visuals
    bool box = true;
    bool fillBox = false;
    bool outline = false;
    bool name = true;             // 0 = Username, 1 = Display Name
    bool healthBar = true;
    bool distance = true;
    bool equippedItem = true;
    bool skeleton = false;
    bool headDot = false;
    bool tracer = false;          // 0 = Top, 1 = Middle, 2 = Bottom, 3 = Mouse
    bool radar = false;
    
    // Chams (Requires overlay depth testing or memory modification)
    bool chamsEnabled = false;
    int chamsStyle = 0;           // 0 = Glow, 1 = Ghost (requires fill)
    bool chamsFilled = false;
    
    // Self & Outline
    bool selfEsp = false;
    bool selfOutline = false;
};

// Misc Configuration
struct MiscConfig {
    bool thirdPerson = false;
    float cameraFov = 70.0f;
    
    // World
    bool customFog = false;
    float fogColor[3] = {0.5f, 0.5f, 0.5f}; // RGB
    
    // Movement (External flight usually requires memory manipulation or specific game exploits)
    bool flightEnabled = false;
    float flightSpeed = 50.0f;
    
    // Triggerbot
    bool triggerbot = false;
    int triggerbotDelay = 10; // ms
};

// Global Config Instance
extern AimbotConfig g_Aimbot;
extern ESPConfig g_ESP;
extern MiscConfig g_Misc;
