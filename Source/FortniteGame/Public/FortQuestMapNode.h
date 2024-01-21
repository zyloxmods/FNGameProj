#pragma once
#include "CoreMinimal.h"
#include "EFortQuestMapNodeLabelPosition.h"
#include "EFortQuestMapNodeType.h"
#include "FortQuestMapNode.generated.h"

class UFortQuestItemDefinition;

USTRUCT(BlueprintType)
struct FFortQuestMapNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* QuestItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortQuestMapNodeType NodeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortQuestMapNodeLabelPosition LabelPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseHighContrastMode;
    
    FORTNITEGAME_API FFortQuestMapNode();
};

