/*
 * This class allows complete encapsulation of the program
 *
 * The user need only add a shape via the pattern shown in the
 * examples below, modifying properties (p) and the texture;
 * the ShapeBuilder class will handle the vertex calculations
 * and mesh construction
 *
 */


#include "SceneBuilder.h"
#include "ShapeBuilder.h"
#include "Mesh.h"

using namespace std;

void SceneBuilder::UBuildScene(vector<GLMesh>& scene)
{

	// seed the rand() function once
	srand(time(nullptr));




	//------------------------------------XBox---------------------------------------------//

	// Xbox Vent
	GLMesh vent_mesh_02;
	vent_mesh_02.p = {
		1.0f, 1.0f, 1.0f, 1.0f,           // color r, g, b, a
		0.9f, 0.9f, 0.01f,                // scale x, y, z

		90.0f, 1.0f, 0.0f, 0.0f,          // x amount of rotation, rotate x, y, z
		0.0f, 0.0f, 1.0f, 0.0f,           // y amount of rotation, rotate x, y, z
		0.0f, 0.5f, 1.5f, 1.0f,           // z amount of rotation, rotate x, y, z
		0.8f, -0.59f, 0.3f,               // translate x, y, z
		2.0f, 2.0f
	};

	vent_mesh_02.height = 1.0f;
	vent_mesh_02.length = 2.0f;
	vent_mesh_02.radius = 0.5f;
	vent_mesh_02.number_of_sides = 300.0f;
	vent_mesh_02.texFilename = "texture\\xboxVent2.jpg";;
	ShapeBuilder::UBuildCylinder(vent_mesh_02);
	scene.push_back(vent_mesh_02);

	// Xbox Console
	GLMesh console_mesh_01;
	console_mesh_01.p = {
		1.0f, 1.0f, 1.0f, 0.0f,             // color r, g, b, a (Kd values)
		1.0f, 0.50f, 2.0f,                  // scale x, y, z

		0.0f, 1.0f, 0.0f, 0.0f,				// x amount of rotation, rotate x, y, z
	   -45.0f, 0.0f, 1.0f, 0.0f,			// y amount of rotation, rotate x, y, z
		0.0f, 0.0f, 0.0f, 1.0f,				// z amount of rotation, rotate x, y, z
		1.5f, -1.12f, 0.5f,					// translate x, y, z
		2.0f, 2.0f
	};

	console_mesh_01.texFilename = "texture//white.png";;
	ShapeBuilder::UBuildCube(console_mesh_01);
	scene.push_back(console_mesh_01);

	//Front of xbox, created a plane on the front of the xbox for the texture. 
	GLMesh xtex_gMesh03;
	xtex_gMesh03.p = {
		1.0f, 1.0f, 1.0f, 1.0f,             // color r, g, b, a (Kd values)
		0.0f, 0.501f, 2.01f,                // scale x, y, z

		0.0f, 1.0f, 0.0f, 0.0f,				// x amount of rotation, rotate x, y, z
		-45.0f, 0.0f, 1.0f, 0.0f,			// y amount of rotation, rotate x, y, z
		0.0f, 0.0f, 0.0f, 1.0f,				// z amount of rotation, rotate x, y, z
		1.1465f, -1.12f, 0.1435f,			// translate x, y, z
		2.0f, 2.0f
	};
	xtex_gMesh03.texFilename = "texture\\xboxTex.jpg";
	ShapeBuilder::UBuildCube(xtex_gMesh03);
	scene.push_back(xtex_gMesh03);

	//Back of xbox, created a plane on the back of the xbox for the texture. 
	GLMesh backtex_gMesh03;
	backtex_gMesh03.p = {
		1.0f, 1.0f, 1.0f, 1.0f,             // color r, g, b, a (Kd values)
		0.0f, 0.501f, 2.01f,                // scale x, y, z

		0.0f, 1.0f, 0.0f, 0.0f,				// x amount of rotation, rotate x, y, z
		-45.0f, 0.0f, 1.0f, 0.0f,			// y amount of rotation, rotate x, y, z
		0.0f, 0.0f, 0.0f, 1.0f,				// z amount of rotation, rotate x, y, z
		1.856f, -1.12f, 0.85199f,			// translate x, y, z
		2.0f, 2.0f
	};
	backtex_gMesh03.texFilename = "texture\\xboxBack.jpg";
	ShapeBuilder::UBuildCube(backtex_gMesh03);
	scene.push_back(backtex_gMesh03);

	//Left side of xbox, created a plane on the left side of the xbox for the texture. 
	GLMesh xSide_gMesh01;
	xSide_gMesh01.p = {
		1.0f, 1.0f, 1.0f, 1.0f,             // color r, g, b, a (Kd values)
		0.0f, 0.50f, 1.0f,                  // scale x, y, z

		0.0f, 1.0f, 0.0f, 0.0f,				// x amount of rotation, rotate x, y, z
		45.0f, 0.0f, 1.0f, 0.0f,			// y amount of rotation, rotate x, y, z
		0.0f, 0.0f, 0.0f, 1.0f,				// z amount of rotation, rotate x, y, z
		2.206f, -1.12f, -0.2092f,			// translate x, y, z
		2.0f, 2.0f
	};

	xSide_gMesh01.texFilename = "texture\\sideVent.jpg";
	ShapeBuilder::UBuildCube(xSide_gMesh01);
	scene.push_back(xSide_gMesh01);

	//Right side of xbox, created a plane on the right side of the xbox for the texture. 
	GLMesh xSide_gMesh02;
	xSide_gMesh02.p = {
		1.0f, 1.0f, 1.0f, 1.0f,             // color r, g, b, a (Kd values)
		0.0f, 0.50f, 1.0f,                  // scale x, y, z

		0.0f, 1.0f, 0.0f, 0.0f,				// x amount of rotation, rotate x, y, z
		45.0f, 0.0f, 1.0f, 0.0f,			// y amount of rotation, rotate x, y, z
		0.0f, 0.0f, 0.0f, 1.0f,				// z amount of rotation, rotate x, y, z
		0.7912f, -1.12f, 1.2058f,			// translate x, y, z
		2.0f, 2.0f
	};

	xSide_gMesh02.texFilename = "texture\\sideVent.jpg";
	ShapeBuilder::UBuildCube(xSide_gMesh02);
	scene.push_back(xSide_gMesh02);

	//------------------------------------Desk-------------------------------------------//
	GLMesh plane_gMesh01;
	plane_gMesh01.p = {
		1.0f, 1.0f, 1.0f, 1.0f,				// color r, g, b a
		5.0f, 1.8f, 1.5f,					// scale x, y, z
		0.0f, 1.0f, 0.0f, 0.0f,				// x amount of rotation, rotate x, y, z
		45.0f, 0.0f, 1.0f, 0.0f,			// y amount of rotation, rotate x, y, z
		0.0f, 0.0f, 0.0f, 1.0f,				// z amount of rotation, rotate x, y, z
		1.0f, -1.13f, 0.0f,					// translate x, y, z
		2.0f, 2.0f
	};
	plane_gMesh01.texFilename = "texture\\desk.png";
	ShapeBuilder::UBuildPlane(plane_gMesh01);
	scene.push_back(plane_gMesh01);



	//----------------------------------TV Frame-------------------------------------------//
	GLMesh frame_mesh_05;
	frame_mesh_05.p = {
		1.0f, 1.0f, 1.0f, 1.0f,             // color r, g, b, a (Kd values)
		0.2f, 5.5f, 11.0f,                  // scale x, y, z
		
		0.0f, 1.0f, 0.0f, 0.0f,				// x amount of rotation, rotate x, y, z
	   -45.0f, 0.0f, 1.0f, 0.0f,			// y amount of rotation, rotate x, y, z
		0.0f, 0.0f, 0.0f, 1.0f,				// z amount of rotation, rotate x, y, z
		2.2f, 0.50f, 1.2f,					// translate x, y, z
		2.0f, 2.0f
	};

	frame_mesh_05.number_of_sides = 6.0f;
	frame_mesh_05.texFilename = "tvFrameTex2.png";;
	ShapeBuilder::UBuildCube(frame_mesh_05);
	scene.push_back(frame_mesh_05);

	//----------------------------------TV Screen-------------------------------------------//
	GLMesh screen_mesh_06;
	screen_mesh_06.p = {
		1.0f, 1.0f, 1.0f, 0.0f,              // color r, g, b, a (Kd values)
		0.0f, 5.2f, 10.7f,                  // scale x, y, z

		0.0f, 1.0f, 0.0f, 0.0f,				// x amount of rotation, rotate x, y, z
	   -45.0f, 0.0f, 1.0f, 0.0f,			// y amount of rotation, rotate x, y, z
		0.0f, 0.0f, 0.0f, 1.0f,				// z amount of rotation, rotate x, y, z
		2.1f, 0.66f, 1.1f,					// translate x, y, z
		2.0f, 2.0f

	};

	//screen_mesh_06.number_of_sides = 4.0f;
	screen_mesh_06.texFilename = "texture\\tvScreenTex.png";;
	ShapeBuilder::UBuildCube(screen_mesh_06);
	scene.push_back(screen_mesh_06);



	//----------------------------------Back Wall---------------------------------------//
	GLMesh wall_mesh_01;
	wall_mesh_01.p = {
		1.0f, 1.0f, 1.0f, 1.0f,             // color r, g, b, a (Kd values)
		0.2f, 9.9f, 17.0f,                  // scale x, y, z

		0.0f, 1.0f, 0.0f, 0.0f,				// x amount of rotation, rotate x, y, z
	   -45.0f, 0.0f, 1.0f, 0.0f,			// y amount of rotation, rotate x, y, z
		0.0f, 0.0f, 0.0f, 1.0f,				// z amount of rotation, rotate x, y, z
		2.5f, -2.13f, 1.5f,					// translate x, y, z
		2.0f, 2.0f
	};

	//wall_mesh_07.number_of_sides = 6.0f;
	wall_mesh_01.texFilename = "texture//white3.jpg";;
	ShapeBuilder::UBuildCube(wall_mesh_01);
	scene.push_back(wall_mesh_01);
	


//--------------------------------Letter "D' Light-------------------------------------//
// finish for final project
// 	   
// 

	//plane Letter D texture
	GLMesh letter_mesh_06;
	letter_mesh_06.p = {
		1.0f, 1.0f, 1.0f, 1.0f,             // color r, g, b, a (Kd values)
		0.0f, 2.0f, 1.9f,                 // scale x, y, z

		0.0f, 1.0f, 0.0f, 0.0f,				// x amount of rotation, rotate x, y, z
	   -30.0f, 0.0f, 1.0f, 0.0f,			// y amount of rotation, rotate x, y, z
		0.0f, 0.0f, 0.0f, 1.0f,				// z amount of rotation, rotate x, y, z
		3.02f, -1.20f, -2.4f,				// translate x, y, z
		2.0f, 2.0f

	};

	letter_mesh_06.texFilename = "texture\\dLight2.png";;
	ShapeBuilder::UBuildLetterCube(letter_mesh_06);
	scene.push_back(letter_mesh_06);

	//-------------------------------Xbox Controller--------------------------------------//
	//finish for final project
	GLMesh remote_mesh_01;
	remote_mesh_01.p = {
		0.0f, 0.0f, 1.0f, 0.0f,             // color r, g, b, a (Kd values)
		0.0f, 1.1f, 1.2f,                   // scale x, y, z
		90.0f, 1.0f, 0.0f, 0.0f,			// x amount of rotation, rotate x, y, z
	   -90.0f, 0.0f, 1.0f, 0.0f,			// y amount of rotation, rotate x, y, z
	   -15.0f, 0.0f, 0.0f, 1.0f,			// z amount of rotation, rotate x, y, z

	   -1.0f, -1.1f, 1.6f,                 // translate x, y, z
		2.0f, 2.0f
	};

	remote_mesh_01.texFilename = "texture\\xboxController2.png";;
	ShapeBuilder::UBuildLetterCube(remote_mesh_01);
	scene.push_back(remote_mesh_01);


	//----------------------------------------------------------------------------------//
	////xbox handles left
	//GLMesh cyl_mesh_09;
	//cyl_mesh_09.p = {
	//	1.0f, 1.0f, 1.0f, 1.0f,          // color r, g, b, a
	//	0.2f, 0.9f, 0.1f,                // scale x, y, z
	//	90.0f, 1.0f, 0.0f, 0.0f,         // x amount of rotation, rotate x, y, z
	//	0.0f, 0.0f, 1.0f, 0.0f,          // y amount of rotation, rotate x, y, z
	//	0.5f, 0.5f, 1.5f, 1.0f,          // z amount of rotation, rotate x, y, z
	//	-0.50f, -0.92f, 1.50f,           // translate x, y, z
	//	2.0f, 2.0f
	//	};
	//
	//cyl_mesh_09.height = 1.0f;
	//cyl_mesh_09.length = 2.0f;
	//cyl_mesh_09.radius = 0.5f;
	//cyl_mesh_09.number_of_sides = 300.0f;
	//cyl_mesh_09.texFilename = "white.png";;
	//ShapeBuilder::UBuildCylinder(cyl_mesh_09);
	//scene.push_back(cyl_mesh_09);

	////xbox handles left
	//GLMesh cyl_mesh_10;
	//cyl_mesh_10.p = {
	//	1.0f, 1.0f, 1.0f, 1.0f,          // color r, g, b, a
	//	0.2f, 0.9f, 0.1f,                // scale x, y, z
	//	90.0f, 1.0f, 0.0f, 0.0f,         // x amount of rotation, rotate x, y, z
	//	0.0f, 0.0f, 1.0f, 0.0f,          // y amount of rotation, rotate x, y, z
	//	0.5f, 0.5f, 1.5f, 1.0f,          // z amount of rotation, rotate x, y, z
	//	-0.50f, -0.92f, 1.50f,           // translate x, y, z
	//	2.0f, 2.0f
	//};

	//cyl_mesh_10.height = 1.0f;
	//cyl_mesh_10.length = 2.0f;
	//cyl_mesh_10.radius = 0.5f;
	//cyl_mesh_10.number_of_sides = 300.0f;
	//cyl_mesh_10.texFilename = "white.png";;
	//ShapeBuilder::UBuildCylinder(cyl_mesh_10);
	//scene.push_back(cyl_mesh_10);
//----------------------------------------------------------------------------------//
}


