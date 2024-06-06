#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AthenaCosmeticItemDefinition.h"
#include "FortHomebaseBannerIconItemDefinition.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortHomebaseBannerIconItemDefinition : public UAthenaCosmeticItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Category;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFullUsageRights: 1;
    
    UFortHomebaseBannerIconItemDefinition(const FObjectInitializer& ObjectInitializer);
};

