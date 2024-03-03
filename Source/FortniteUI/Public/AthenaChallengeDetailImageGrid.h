#pragma once
#include "CoreMinimal.h"
#include "AthenaChallengeDetailBase.h"
#include "Templates/SubclassOf.h"
#include "AthenaChallengeDetailImageGrid.generated.h"

class UUniformGridPanel;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaChallengeDetailImageGrid : public UAthenaChallengeDetailBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUniformGridPanel* Grid_Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> EntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentFocusedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> QuestIds;
    
public:
    UAthenaChallengeDetailImageGrid();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwnedToCompleteTransitions(int32 Count, float TimeOffset, float AdditionalTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockedToOwnedTransitions(int32 Count, float TimeOffset, float AdditionalTime);
    
};

