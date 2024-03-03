#pragma once
#include "CoreMinimal.h"
#include "CustomLootOverrideData.h"
#include "ECustomLootSelection.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_LootChoice.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_LootChoice : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ECustomLootSelection LootSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomLootOverrideData> LootOverrideDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bUsingExperimentalTables;
    
public:
    AFortAthenaMutator_LootChoice();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

