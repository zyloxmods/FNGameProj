#pragma once
#include "CoreMinimal.h"
#include "FortPlayspaceComponent.h"
#include "PapayaAnalyticsComponent.generated.h"

class UPapayaAnalyticsComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPapayaAnalyticsComponent : public UFortPlayspaceComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPapayaAnalyticsComponent* ParentAnalyticsComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPapayaAnalyticsComponent* ChildAnalyticsComp;
    
public:
    UPapayaAnalyticsComponent();
};

