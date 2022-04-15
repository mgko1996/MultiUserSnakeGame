#pragma once

#include "pch.h"
#include "AccountManager.h"
#include "UserManager.h"

void AccountManager::ProcessLogin()
	lock_guard<mutex> guard(_mutex);
	UserManager::instance()->GetUser(100);
}