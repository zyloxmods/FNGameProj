#pragma once
#include "CoreMinimal.h"
#include "EFortSupportBonusType.h"
#include "FortIconWithLabel.h"
#include "FortHeroSupportPerkIndicator.generated.h"

class UFortItem;

UCLASS(Blueprintable)
class UFortHeroSupportPerkIndicator : public UFortIconWithLabel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> ItemToRepresent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortSupportBonusType SupportTypeToRepresent;
    
    UFortHeroSupportPerkIndicator();
    UFUNCTION(BlueprintCallable)
    void SetSupportTypeToRepresent(const EFortSupportBonusType NewSupportTypeToRepresent);
    
    UFUNCTION(BlueprintCallable)
    void SetItemToRepresent(const UFortItem* NewItemToRepresent);
    
};

