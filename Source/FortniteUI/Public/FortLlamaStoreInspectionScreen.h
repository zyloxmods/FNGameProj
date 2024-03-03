#pragma once
#include "CoreMinimal.h"
#include "EInputActionState.h"
#include "FortStoreFrontOfferDetailsWidgetBase.h"
#include "FortLlamaStoreInspectionScreen.generated.h"

class UCommonTileView;
class UFortCardPackItem;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLlamaStoreInspectionScreen : public UFortStoreFrontOfferDetailsWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTileView* GrantedItemTileView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInChoiceViewMode;
    
public:
    UFortLlamaStoreInspectionScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemChoicePack(UObject* ItemToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortCardPackItem* GetSelectedCardPack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInputActionState GetInspectChoiceInputState() const;
    
};

