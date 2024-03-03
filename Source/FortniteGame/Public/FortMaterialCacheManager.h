#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "FortMaterialCacheManager.generated.h"

class UFortMaterialCache;
class UMaterialInterface;

UCLASS(Blueprintable, Within=FortGameInstance)
class UFortMaterialCacheManager : public UObject {
    GENERATED_BODY()
public:
    UFortMaterialCacheManager();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortMaterialCache* GetCache(UObject* WorldContextObject, const FDataTableRowHandle& CacheSettings, UMaterialInterface* BaseMaterial);
    
};

