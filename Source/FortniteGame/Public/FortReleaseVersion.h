#pragma once
#include "CoreMinimal.h"
#include "FortReleaseVersion.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortReleaseVersion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VersionName;
    
public:
    FFortReleaseVersion();
};

