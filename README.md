# Scaffold Engine 2.0

### Repository Link: [Scaffold Engine v2.0](https://github.com/NachoMoren/Scaffold_v2.0)

### Current release version: v0.3 - Engine Editor

### GitHub page: (In Progress)

## Description

Scaffold is a 3D game engine that's being developed as didactic purpose for the 'Game Engines' subject in CITM Bachelor's degree in Video Game Design and Development.

This current version of the engine was forked from **Ymir Engine** [Ymir Engine](https://github.com/francesctr4/Ymir-Engine), in order to focus on the third assigment.
You can check our first repository **here:** [Scaffold Engine](https://github.com/NachoMoren/Scaffold).

## Team Members

_**Ignacio Moreno Navarro**_
* **GitHub:** [Nacho Moreno](https://github.com/NachoMoren)

_**Biel Rubio Dieste**_
* **GitHub:** [Biel Rubio](https://github.com/BielRubio)

## Instructions

### Controls

#### CAMERA

    - While Right Clicking, “WASD” FPS-like movement and free look around.
    - Mouse wheel zoom in and out.
    - "Alt" + Right Click (Press + Drag) orbits around the object.
    - Pressing “F” (or "Alt") focus the camera around the world (0,0,0).
    - Mouse Wheel Button + Drag pans around the viewport.
    - Holding SHIFT while moving the camera duplicates movement speed.

#### SCENE

    - "C" Clears the scene.
    - "LCTRL + S": Save the scene.
    - "LCTRL + L": Load the scene.
    - Hierarchy: Right click to select GameObject and Right click to delete selected GameObject. 
    You can drag the GameObjects to reparent them.
    - Inspector: Drag Transform values to modify the mesh (only with shader enabled).
    - Drag and Drop: Drag .fbx or .png/.dds (to selected GameObject) directly to scene to load them.
    - Time Management: Manipulate simulation state with the buttons at the top.
    - Assets/Library Window: Left click on the files that are highlighted to open them.
    - Mouse Picking: Left Click on a GameObject in the scene to select it.
    - Gizmo: Manipulate GameObjects transformation directly from the scene. The controls are: 
        "W" Translation
        "E" Rotation
        "R" Scale
        "O" World
        "L" Local

#### EDITOR

    - File menu: Exit button to shut the engine.
    - GameObject menu: Create Empty and Primitives GameObjects and Clear Scene.
    - Windows menu: Application menu with general configurations of the engine and several editor 
    windows with utilities.
    - Help menu: About Modal Window with info of the engine and Repository link.

### Additional Instructions

- The shader is currently responsible for the transformations on the gameobjects, so if you upload a model without a texture,
the shader won't be enabled and the transformations won't be applied. To solve this apply the checker texture to the gameObject or
drag a texture to enable the shader.

- The Resource Manager is not finished for this delivery, although you can find the source files in progress (Resources classes and Importers).
This means that all the loading of the meshes is being done by Assimp using the Assets file (it will take some time to start the engine).

- The Scene Loading and Saving currently only loads and saves the GameObject structure of the scene and the editor camera position.

- Temporal folder library creation is done correctly and the resources are saved with the custom file format, but they are not being loaded from Library yet.

## Features

### v0.2 - Engine Editor

![Engine Editor](https://github.com/francesctr4/Ymir-Engine/assets/99948892/60e046b7-a202-4ad4-929e-6003e46db754)

- The ‘Street Environment’ scene is automatically loaded at the start.
- The user is be able to use the inspector to modify a GameObject:
    - Hierarchy: delete, reparent, create empty and create children.
    - Transform: translate, rotate and scale GameObjects.
    - Camera is a component with settings that can be modified.
- GameObjects can be picked from the world using the mouse.
- All meshes use a bounding volume (AABB) and can be discarded using Frustum Culling.
- Models, meshes and textures are saved to Ymir Engine format under “Library” folder.
- Scene is serialized to a file that can be loaded.
- The user can Start / Pause / Stop the simulation and recover its original state.
- The editor has 2 windows:
    - One with the scene (Editor view).
    - Another one captured from a GameObject with a camera component (Main Game Camera).
    - Each one has its own framebuffer and the user can visualize both at the same time.
- Resource Management:
    - Assets Window that shows all user assets.
    - The user can drop/import new files. Assets window reacts properly.
    - On first use, the temporal folder Library is created and meta files are generated for each new imported asset.
    - Library can be regenerated if deleted.
    - The imported assets are saved in Library folder with Ymir Engine custom file format.

## Additional functionality (Cool features!)

- There is a space skybox by default. In the folder Assets/Skybox there is more skybox textures in case you want to test several environments.
- The Assets and Library Windows have some files highlighted on blue, you can interact with them to read the contents inside the engine.
- When you select a GameObject, the shader makes an orange highlight to the mesh.
- There is an option in Inspector -> Mesh Component to turn on/off the Normal Map of the selected Mesh (done by shader).
- The Gizmo has been implemented and can be used to manage GameObjects' transformations.
- The shaders now can be loaded using a single file instead of separating Vertex Shader and Fragment Shader.
- Added Node Editor for future material editing with shaders.

![Frustum Culling GIF](https://github.com/francesctr4/Ymir-Engine/assets/99948892/c450f2a6-32ca-4ede-a089-2ea709d22eb7)
_Frustum Culling_

![Gizmo GIF](https://github.com/francesctr4/Ymir-Engine/assets/99948892/0298985a-6f14-4016-bb57-f0e9789dda16)
_Gizmo Showcase_

![Node Editor](https://github.com/francesctr4/Ymir-Engine/assets/99948892/e3fe5c90-3f55-4057-8feb-df4e3859d45e)
_Node Editor_

## Known bugs (Work in progress)

- There's some visual errors on the material component of the GameObjects in the inspector. When you upload a new model, the texture displayed from the older loaded meshes turns pitch black.

- The vertex normals and the face normals do not follow exactly the GameObject transformations.

- The Gizmo is only usable with meshes with a shader and is visible above the editor.

- Mouse picking can only be done with real transformations, not the ones in the shader. So when you move the GameObject with the gizmo, you can't no longer mouse pick the GameObject.
  
- Custom File Format files .ymesh and .yscene are being duplicated everytime the engine starts, because it generates a new UID automatically, but .ymodel files and .dds textures are managed correctly.

- When deleting a GameObject sometimes the shader disables and everything is displayed white.

- GameObjects transform has several issues: only applicable to meshes, and models movement doesn't transform correctly the childrens because there is no local transform.

- There's also some visual errors on the transform component of the GameObjects in the inspector. When a model has several meshes and you select the model itself, there is n transform components
according to n meshes the model has and the Reset Transform button doesn't work properly in this situation.

### v0.1 - Geometry Viewer

![Geometry Viewer](https://github.com/francesctr4/Ymir-Engine/assets/99948892/4f386158-7507-4f23-83f4-87af180ec91e)

- Baker House automatically loaded at the start.
- Two models provided in FBX format with one channel diffuse texture.
- Drag&Drop of FBX files from anywhere in the Hard Drive.
- Drag&Drop of DDS/PNG files (apply the texture to the selected GameObject).
- GameObject structure, one for each loaded mesh.
- Three components available for the GameObjects: Transform, Mesh and Material.
- Unity-like camera controls.
- Editor Windows:
  - Console: Show LOGs.
  - Configuration:
    - A graph for the frames per second.
    - Configuration for variables on each module (renderer, window, input, textures).
    - Information output of memory consumption and hardware detection.
    - OpenGL configuration.
    - ...and more!
  - Hierarchy: list with all GameObjects with tree structure. The user is able to select a GameObject through this window.
  - Inspector: displays information about the components of the selected GameObject.
- About Modal Window to get info about the engine.
- Menu to load basic shapes.

## Additional functionality (Cool features!)

- Early Shader Implementation for Rendering Geometry with VAO (Vertex Shader and Fragment Shader).
- Apply Transformations to Geometry with the Transform Component (Translation, Rotation and Scale).
- Custom Icon Uploaded to the Engine Executable.
- Extensive primitive library inside the engine on GameObject menu.

![Transformations GIF](https://github.com/francesctr4/Ymir-Engine/assets/99948892/8f27c2e9-ec37-41fc-b808-504c774a44e0)
![Primitive Library](https://github.com/francesctr4/Ymir-Engine/assets/99948892/830ed6e5-4216-4052-99ee-d4b58d29000e)

## Known bugs (Work in progress)

- There's some visual errors when deleting GameObjects from the hierarchy. The selected GameObject and his children are deleted, but the text of the parent is still displayed as if the GameObject
was still there (but it isn't). It is recommended to clear the scene pressing "C" to get rid of the corrupted GameObjects that may appear.

- There's some visual errors on the material component of the GameObjects in the inspector. When you upload a new model, the texture displayed from the older loaded meshes turns pitch black.

- There's also some visual errors on the transform component of the GameObjects in the inspector. When a model has several meshes and you select the model itself, there is n transform components
according to n meshes the model has and the Reset Transform button doesn't work properly in this situation. Regardless of the visual error, if you manipulate the first transform you will have the
same effect as having the parent transform matrix and the children will transform too.
