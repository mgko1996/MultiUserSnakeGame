#pragma once
#include "pch.h"
#include <mutex>

class User
{
	//TODO
};

class UserManager
{
public:
	static UserManager* instance()
	{
		static UserManager instance;
		return &instance;
	}


	User* GetUser(int32 id)
	{
		lock_guard<mutex> guard(_mutex);

		return nullptr;
	}

	void ProcessSave();

private:
	mutex _mutex;
	//map<int32, User*> _users;

};