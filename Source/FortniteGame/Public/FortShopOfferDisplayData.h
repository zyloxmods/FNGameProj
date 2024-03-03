#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortShopOfferDisplayData.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortShopOfferDisplayData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Presentations;
    
    UFortShopOfferDisplayData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNoPresentations() const;
    
    UFUNCTION(BlueprintCallable)
    void AddPresentation(UMaterialInterface* PresentationToAdd);
    
};

