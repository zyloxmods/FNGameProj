#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortCreativeIslandNamingModal.generated.h"

class UCommonButton;
class UFortCreativeIslandLink;
class UFortCreativeRealEstatePlotItemDefinition;
class UFortEditableFilteredCountedTextBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeIslandNamingModal : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InitialDisplayText;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortEditableFilteredCountedTextBox* FilteredTextEntryWidget_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Confirm;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCreativeRealEstatePlotItemDefinition* TemplateRealEstatePlotDefinition;
    
public:
    UFortCreativeIslandNamingModal();
    UFUNCTION(BlueprintCallable)
    void InitFromPlotItemDefinition(UFortCreativeRealEstatePlotItemDefinition* RealEstateItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    void InitFromIslandLink(UFortCreativeIslandLink* IslandLink);
    
};

