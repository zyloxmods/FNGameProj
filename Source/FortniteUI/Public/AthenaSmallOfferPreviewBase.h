#pragma once
#include "CoreMinimal.h"
#include "FortItemBaseWidget.h"
#include "AthenaSmallOfferPreviewBase.generated.h"

class UFortStoreFrontOfferInfo;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaSmallOfferPreviewBase : public UFortItemBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortStoreFrontOfferInfo* OfferData;
    
public:
    UAthenaSmallOfferPreviewBase();
    UFUNCTION(BlueprintCallable)
    void SetupOffer(UFortStoreFrontOfferInfo* InOfferData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOfferSet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortStoreFrontOfferInfo* GetOfferInfo() const;
    
};

