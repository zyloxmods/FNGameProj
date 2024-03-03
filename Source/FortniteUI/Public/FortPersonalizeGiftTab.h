#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortPersonalizeGiftTab.generated.h"

class UCommonTileView;
class UFortGiftBoxButton;
class UFortGiftBoxItemDefinition;

UCLASS(Blueprintable, EditInlineNew)
class UFortPersonalizeGiftTab : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PersonalizedMessageLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultGiftMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortGiftBoxItemDefinition>> GiftBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortGiftBoxButton* SelectedGiftBoxButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortGiftBoxItemDefinition*> GiftBoxItemDefs;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTileView* TileView_GiftBoxes;
    
public:
    UFortPersonalizeGiftTab();
};

