#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortInfoWindow.generated.h"

class UCommonListView;
class UObject;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortInfoWindow : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* InfoEntries;
    
    UFortInfoWindow();
    UFUNCTION(BlueprintCallable)
    UWidget* GetListWidget(UObject* Item);
    
};

