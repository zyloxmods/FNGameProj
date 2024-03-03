#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortSettingClassExtensions.h"
#include "FortSettingNameExtensions.h"
#include "Templates/SubclassOf.h"
#include "FortSettingVisualData.generated.h"

class UFortSetting;
class UFortSettingsListEntryBase;

UCLASS(Blueprintable)
class UFortSettingVisualData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UFortSetting>, TSubclassOf<UFortSettingsListEntryBase>> EntryWidgetForClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TSubclassOf<UFortSettingsListEntryBase>> EntryWidgetForName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UFortSetting>, FFortSettingClassExtensions> ExtensionsForClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FFortSettingNameExtensions> ExtensionsForName;
    
public:
    UFortSettingVisualData();
};

