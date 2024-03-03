#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "PickupStreamEntry.h"
#include "Templates/SubclassOf.h"
#include "PickupStream.generated.h"

class UFortWorldItem;
class UTexture2D;
class UUserWidget;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPickupStream : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPickupStreamEntry> PickupDisplayEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDisplayedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> PickupEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpirationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox_PickupMessages;
    
public:
    UPickupStream();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshPickupEntry(UUserWidget* EntryWidget, const TSoftObjectPtr<UTexture2D>& Icon, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemPickedUp(UFortWorldItem* WorldItem, int32 Count);
    
};

