
#pragma once

#include "CoreMinimal.h"
#include "FortReleaseVersion.generated.h"

USTRUCT(BlueprintType)
struct FFortReleaseVersion
{
	
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	   FName VersionName;                                            
};