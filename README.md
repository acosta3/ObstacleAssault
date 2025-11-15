## 3D Platformer (Unreal Engine)

This is a 3D platformer built with Unreal Engine that focuses on core movement, platforming mechanics, and gameplay feel.

### Key Gameplay Features
- Moving platforms with proper start/end points  
- Rotating platforms for added difficulty and timing  
- Basic level layout focused on readable jumps and safe/unsafe areas  
- Tuned character movement (gravity scale, jump height, walk angle, walk/run speed)

### What I Worked On / Learned

**Unreal Engine / Gameplay**
- Using `UPROPERTY` to expose variables to the editor  
- Correcting overshoot on moving platforms using C++ logic  
- Basic gameplay level design and iteration  
- Physics-based adjustments for character movement and platform behavior  

**C++ (Unreal)**
- Member variables and functions for gameplay logic  
- Using structs and `UPROPERTY` to organize and expose data  
- Creating and working with custom C++ Actor classes  

**Blueprints**
- Creating a Blueprint from a C++ Actor class to hook up visuals and logic  
- Swapping the static mesh inside the Blueprint so the same Actor logic can be reused with different meshes  
- Making multiple instances of that Blueprint Actor and placing them in the level via drag-and-drop
