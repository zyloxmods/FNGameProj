#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortQuestMapNodeLabelPosition.h"
#include "EFortQuestMapNodeType.h"
#include "FortQuestMapNode.generated.h"

class UFortQuestItemDefinition;

USTRUCT(BlueprintType)
struct FFortQuestMapNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId QuestItemDefinitionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* QuestItemDefinition;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortQuestMapNodeType NodeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortQuestMapNodeLabelPosition LabelPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseHighContrastMode;
    
    FORTNITEGAME_API FFortQuestMapNode();
};

