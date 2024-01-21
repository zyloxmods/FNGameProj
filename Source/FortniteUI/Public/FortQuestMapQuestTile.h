#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortQuestMapNode.h"
#include "FortQuestMapQuestTile.generated.h"

class UCommonButton;

UCLASS(Blueprintable, EditInlineNew)
class UFortQuestMapQuestTile : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* QuestButton;
    
    UFortQuestMapQuestTile();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSelectedChange(bool Selected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleQuestDataChangedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortQuestMapNode GetQuestNodeData() const;
    
};

