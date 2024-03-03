#pragma once
#include "CoreMinimal.h"
#include "BattlePassCharacterPreviewDisplayData.generated.h"

class UAthenaCharacterItemDefinition;
class UMaterialInstance;

USTRUCT(BlueprintType)
struct FBattlePassCharacterPreviewDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCharacterItemDefinition* CharacterItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* PreviewMaterial;
    
    FORTNITEUI_API FBattlePassCharacterPreviewDisplayData();
};

