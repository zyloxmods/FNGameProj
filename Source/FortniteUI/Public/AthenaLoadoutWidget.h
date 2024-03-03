#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "AthenaLoadoutWidget.generated.h"

class UAthenaLoadoutEntryWidget;
class UFortAthenaInventoryLoadout;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaLoadoutWidget : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAthenaLoadoutEntryWidget*> EntryWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaLoadoutEntryWidget> EntryWidgetClass;
    
public:
    UAthenaLoadoutWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoadoutChosen(const UFortAthenaInventoryLoadout* SelectedLoadout);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddEntryWidget(UAthenaLoadoutEntryWidget* NewWidget);
    
};

