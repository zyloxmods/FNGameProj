#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaNewsEntry.h"
#include "EAthenaNewsStyle.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMOTDTeaserWidget.generated.h"

class UFortAthenaMOTDSimpleNewsWidget;
class UFortAthenaMOTDTileListView;
class UFortAthenaMOTDWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAthenaMOTDTeaserWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaMOTDWidget> MOTDWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaMOTDSimpleNewsWidget> MOTDSimpleNewsWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaMOTDTileListView* FortAthenaMOTDTileListView;
    
public:
    UFortAthenaMOTDTeaserWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetViewConfiguration();
    
    UFUNCTION(BlueprintCallable)
    void OpenMOTDScreen(int32 FocusedNewsIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewsPopulated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleNewsStyle(EAthenaNewsStyle NewsStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNewsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAthenaNewsEntry GetNewsByIndex(int32 Index) const;
    
};

