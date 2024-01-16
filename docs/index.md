# Scaffold

Scaffold is a 3D game engine that's being developed as didactic purpose for the 'Game Engines' subject in CITM Bachelor's degree in Video Game Design and Development.

This current version of the engine was forked from **Ymir Engine** [Ymir Engine](https://github.com/francesctr4/Ymir-Engine), in order to focus on the third assigment.
You can check our main repository **here:** [Scaffold Engine](https://github.com/NachoMoren/Scaffold).
    
****

# Developers

_**Ignacio Moreno Navarro**_
* **GitHub:** [Nacho Moreno](https://github.com/NachoMoren)

_**Biel Rubio Dieste**_
* **GitHub:** [Biel Rubio](https://github.com/BielRubio)

# Main Core Sub-Systems

**1. 3D Rendering**

**2. Camera Culling**

The scene only renders objects that are within the camera frustum in order ti improve performance.

**3. Editor Docking**

Every window on the editor can be moved whenever you please so can have your workspace neat and clean.

**4. GameObject & Component System**

Every entity that you create in the editor is a gameObject. This gameObject can have multiple Components that dicactes its behaviour, like its transformations, texture, mesh, etc...

**5. Time Management**

The time management system makes it possible to start/stop/pause a simulation that will also run other systems. The content played during this simulation will be the exact content played/displayed when the game is compiled and executed as a standalone application.

# Shader Pipeline

The engine uses a shader pipeline to draw geometry. It has its own default shader that can be changed with a built in shader text editor that can modify and create new shaders, and apply them to individual GameObjects.
We also added a simple water shader as an example of how one could use the shader editor.

 ![Shaders](/assets/images/WaterShader.png)

# Workflow video

<video src="images/workflow.mp4" width="320" height="240" controls></video>

# License

MIT License

Copyright (c) 2023 Ignacio Moreno Navarro & Biel Rubio Dieste

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
