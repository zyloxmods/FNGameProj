#pragma once
#include "CoreMinimal.h"
#include "EFortInventoryFilter.h"
#include "FortItemListFilter.generated.h"

USTRUCT(BlueprintType)
struct FFortItemListFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SearchText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortInventoryFilter FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInStorageVault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeVaultOverflow;
    
    FORTNITEUI_API FFortItemListFilter();
};

