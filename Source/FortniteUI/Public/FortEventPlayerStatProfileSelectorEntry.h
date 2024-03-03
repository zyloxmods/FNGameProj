#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortEventPlayerStatProfileSelectorEntry.generated.h"

class UCommonTextBlock;
class UFortEventPlayerStatProfileSelectorEntryData;
class UFortFlagImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortEventPlayerStatProfileSelectorEntry : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortFlagImage* FlagImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortEventPlayerStatProfileSelectorEntryData* ProfileData;
    
public:
    UFortEventPlayerStatProfileSelectorEntry();
    
    // Fix for true pure virtual functions not being implemented
};

