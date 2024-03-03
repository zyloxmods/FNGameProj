#pragma once
#include "CoreMinimal.h"
#include "ViewVaultItemsParams.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FViewVaultItemsParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortItemDefinition*> ItemsToView;
    
    FORTNITEUI_API FViewVaultItemsParams();
};

