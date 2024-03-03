#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaWatchers.generated.h"

class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaWatchers : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_Watchers;
    
public:
    UAthenaWatchers();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateVisibilityBasedOnHUDSettings();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpectatorsEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpectatorsBegan(bool bBigGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpectatorsAdded(bool bBigGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpectatorRemoved();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpectatorCountChanged_BP(int32 NewCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSpectatorCountChanged(int32 NewCount);
    
};

