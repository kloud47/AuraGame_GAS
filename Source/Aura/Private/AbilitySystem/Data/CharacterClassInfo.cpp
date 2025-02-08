// Copyright Priyanshu Shukla


#include "AbilitySystem/Data/CharacterClassInfo.h"

FCharacterClassDefaultInfo UCharacterClassInfo::GetClassDefaultInfo(ECharacterClass CharaClass) const
{
	return CharacterClassInformation.FindChecked(CharaClass);
}
