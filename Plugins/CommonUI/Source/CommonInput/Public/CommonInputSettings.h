#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CommonInputPlatformData.h"
#include "Templates/SubclassOf.h"
#include "CommonInputSettings.generated.h"

class UCommonUIInputData;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class COMMONINPUT_API UCommonInputSettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoLoadData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonUIInputData> InputData;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonInputPlatformData CommonInputPlatformData[7];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonUIInputData> InputDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCommonInputPlatformData CurrentPlatform;
    
public:
    UCommonInputSettings();
};

