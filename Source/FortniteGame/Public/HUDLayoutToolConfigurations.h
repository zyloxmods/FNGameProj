#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "FortMobileHUDPresetHotfix.h"
#include "Templates/SubclassOf.h"
#include "HUDLayoutToolConfigurations.generated.h"

class UFortMobileHUDPresetContainer;
class UMobileHUDLayoutLegacyConverter;

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class UHUDLayoutToolConfigurations : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMobileHUDLayoutLegacyConverter> LegacyLayoutConverterClass;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumCustomLayoutSaveSlots;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultHUDProfilePresetTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActiveHUDPresetContainers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortMobileHUDPresetContainer>> HUDPresetContainerClasses;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMobileHUDPresetHotfix> HUDProfilePresetHotfixes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultButtonVisualSize;
    
public:
    UHUDLayoutToolConfigurations();
};

