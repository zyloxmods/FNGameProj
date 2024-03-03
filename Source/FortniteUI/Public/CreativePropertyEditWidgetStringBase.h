#pragma once
#include "CoreMinimal.h"
#include "CreativePropertyEditWidgetUserOptionBase.h"
#include "CreativePropertyEditWidgetStringBase.generated.h"

class UFortEditableFilteredCountedTextBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCreativePropertyEditWidgetStringBase : public UCreativePropertyEditWidgetUserOptionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortEditableFilteredCountedTextBox* FilteredTextEntry_Widget;
    
public:
    UCreativePropertyEditWidgetStringBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEntryCharacterLimit();
    
};

