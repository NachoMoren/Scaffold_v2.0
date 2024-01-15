#pragma once

#include "Component.h"
#include "Shader.h"

#include "Globals.h"
#include <string>

class GameObject;

class CMaterial : public Component {
public:

	CMaterial(GameObject* owner);
	virtual ~CMaterial();

	void Enable() override;
	void Disable() override;

	void Update() override;
	void OnInspector() override;

	void DdsDragDropTarget();

public:
	Shader* shader; 

	uint ID;
	std::string path;

};
