#pragma once
#include "CoreMinimal.h"
#include "FortDataStore_EliminationDependent.h"
#include "FortSwapItemAndVariantData.h"
#include "FortDataStore_HightowerMangoDataStore.generated.h"

UCLASS(Blueprintable)
class UFortDataStore_HightowerMangoDataStore : public UFortDataStore_EliminationDependent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortSwapItemAndVariantData> LastVictimRelevantLoadout;
    
    UFortDataStore_HightowerMangoDataStore();
    UFUNCTION(BlueprintCallable)
    void ClearDataCache();
    
};

