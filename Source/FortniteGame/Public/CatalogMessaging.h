#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CatalogMessaging.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UCatalogMessaging : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> StoreToast_Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> StoreToast_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> Banners;
    
    UCatalogMessaging();
};

