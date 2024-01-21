#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortHelpItemType.h"
#include "FortHelpAdditionalContent.h"
#include "FortHelpItem.generated.h"

class UFortHelpItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEGAME_API UFortHelpItem : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortHelpItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HeaderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BodyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortHelpAdditionalContent AdditionalContent;
    
    UFortHelpItem();
    UFUNCTION(BlueprintCallable)
    TArray<UFortHelpItem*> GetSubItems();
    
    UFUNCTION(BlueprintCallable)
    UFortHelpItem* GetItemWithID(const FName _ItemID);
    
};

