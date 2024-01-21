#pragma once
#include "CoreMinimal.h"
#include "NavLinkRenderingComponent.h"
#include "EdgeNavLinksRenderingComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEdgeNavLinksRenderingComponent : public UNavLinkRenderingComponent {
    GENERATED_BODY()
public:
    UEdgeNavLinksRenderingComponent();
};

