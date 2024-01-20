#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortReturnReasonEntry.generated.h"

class UCommonTextBlock;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortReturnReasonEntry : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* InternalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Name;
    
public:
    UFortReturnReasonEntry();
    
    // Fix for true pure virtual functions not being implemented
};

