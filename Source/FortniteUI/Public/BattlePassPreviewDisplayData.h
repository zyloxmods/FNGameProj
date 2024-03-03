#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BattlePassCharacterPreviewDisplayData.h"
#include "BattlePassPreviewDisplayData.generated.h"

class UMaterialInstance;

UCLASS(Blueprintable)
class UBattlePassPreviewDisplayData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* CurrencyMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattlePassCharacterPreviewDisplayData> CharacterPreviewDisplayData;
    
    UBattlePassPreviewDisplayData();
};

