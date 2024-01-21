#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortPublicAccountInfo.h"
#include "FortStoreFrontOfferWidgetBase.generated.h"

class UFortStoreFrontOfferInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortStoreFrontOfferWidgetBase : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortStoreFrontOfferInfo*> GroupedOffers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortStoreFrontOfferInfo* OfferData;
    
public:
    UFortStoreFrontOfferWidgetBase();
    UFUNCTION(BlueprintCallable)
    void SetupOffer(UFortStoreFrontOfferInfo* InOfferData);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllOffers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOfferSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOfferAdded();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleCurrentlyViewedAccountInfoChanged(FFortPublicAccountInfo NewInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortStoreFrontOfferInfo* GetOfferInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void AddOffer(UFortStoreFrontOfferInfo* InOfferData);
    
};

