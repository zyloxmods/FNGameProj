#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ManagedGameplayTagDataTableItem.h"
#include "GameplayTagTableManager.generated.h"

UCLASS(Blueprintable)
class EPICGAMEPLAYSTATSRUNTIME_API UGameplayTagTableManager : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FManagedGameplayTagDataTableItem> Tables;
    
public:
    UGameplayTagTableManager();
};

