#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Templates/SubclassOf.h"
#include "AthenaCollectionPlayerProgressContainer.generated.h"

class UAthenaCollectionPlayerProgress;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCollectionPlayerProgressContainer : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaCollectionPlayerProgress> PlayerProgressClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CycleDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShowLocalPlayerAfterNumEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaCollectionPlayerProgress*> CachedPlayerProgressEntries;
    
public:
    UAthenaCollectionPlayerProgressContainer();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerProgressEntriesCreated(const TArray<UAthenaCollectionPlayerProgress*>& PlayerProgressEntries, int32 NumToCollect);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerProgressContainerReset();
    
};

