#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortUserCloudRequestResult : uint8 
{
	Failure_CloudStorageDisabled,
	Failure_CloudStorageError,
	Failure_FileNotFoundInUserFileList,
	Failure_SavingNotAllowedForSpecifiedUser,
	EFortUserCloudRequestResult_MAX,
};
