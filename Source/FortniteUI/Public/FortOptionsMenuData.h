#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESettingTab.h"
#include "OptionsTabData.h"
#include "FortOptionsMenuData.generated.h"

UCLASS(Blueprintable)
class UFortOptionsMenuData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESettingTab, FOptionsTabData> TabDatas;
    
    UFortOptionsMenuData();
};

