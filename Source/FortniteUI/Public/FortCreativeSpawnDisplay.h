#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "RarityArray.h"
#include "FortCreativeSpawnDisplay.generated.h"

class UFortItemDefinition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeSpawnDisplay : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRarityArray> ItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItemDefinition*> AllItems;
    
    UFortCreativeSpawnDisplay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadedItems();
    
    UFUNCTION(BlueprintCallable)
    void LoadItems();
    
};

