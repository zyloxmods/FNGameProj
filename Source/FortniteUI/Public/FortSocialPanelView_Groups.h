#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortSocialPanelView_Groups.generated.h"

class USocialGroupTreeView;

UCLASS(Blueprintable, EditInlineNew)
class UFortSocialPanelView_Groups : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USocialGroupTreeView* TreeView_Groups;
    
public:
    UFortSocialPanelView_Groups();
};

