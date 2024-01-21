#pragma once
#include "CoreMinimal.h"
#include "ESettingType.h"
#include "OptionsReleaseInfo.generated.h"

USTRUCT(BlueprintType)
struct FOptionsReleaseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESettingType SettingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReleaseVersion;
    
    FORTNITEUI_API FOptionsReleaseInfo();
};

