#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortDottedPagination.generated.h"

class UListView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortDottedPagination : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWrapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* ListView_Dots;
    
public:
    UFortDottedPagination();
};

