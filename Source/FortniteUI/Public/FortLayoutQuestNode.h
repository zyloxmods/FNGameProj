#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortQuestMapNode.h"
#include "FortLayoutQuestNode.generated.h"

class UFortQuestMapQuestTile;

UCLASS(Blueprintable, EditInlineNew)
class UFortLayoutQuestNode : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortQuestMapQuestTile* QuestTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestNodeIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortQuestMapNode QuestMapNode;
    
public:
    UFortLayoutQuestNode();
};

